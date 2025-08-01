#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "z64recomp_api.h"

typedef struct {
    int a;
    int b;
} TestStruct;

ActorExtensionId gActorExtension;

RECOMP_CALLBACK("*", recomp_on_init) void handleInits() {
    gActorExtension = z64recomp_extend_actor(ACTOR_PLAYER, sizeof(TestStruct));
}
