#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimatorUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimatorUtils"));
	}

	template <typename T = int32_t> static T& BASE_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UPBODY_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UPBODY_OVERRIDE_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BodyState_Stand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BodyState_Crouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BodyState_Prone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_BaseLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_UpperBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_UpperBodyOverride() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_Aim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LeftHandAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LeftHandBaseLayerOverride() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LeftRightRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LeftHandOverride() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_RightHandWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_SwimHands() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_UpperBodyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_RightHandOffsetAdditive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LowerBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_LeftHandSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_RightHandOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_RightHandSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_FireMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LAYER_NAME_Fire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Alive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Inactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Aiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Idle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Move() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Sprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_CrouchMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Crouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_CrouchSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_ProneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_ProneIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_BRClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_StandToCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_CrouchToStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_ProneToCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_CrouchToProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_StartToProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_ProneToStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_GetWeaponProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_GetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_PutWeapon_Left_Prone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_PutWeapon_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_PutWeapon_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_PutWeapon_Right_Prone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Swim_PutWeaponRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Swim_GetWeaponRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Swim_PutWeaponLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Swim_GetWeaponLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Crouch_1P_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Crouch_NoWeapon_Pickup_Item() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Crouch_NoWeapon_Pickup_Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Crouch_HadWeapon_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Prone_NoWeapon_Pickup_Item() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Prone_NoWeapon_Pickup_Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Prone_HadWeapon_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_NoWeapon_Pickup_Item() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_NoWeapon_Pickup_Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_HadWeapon_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Prone_UpBody_NoWeapon_Pickup_Item() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Prone_UpBody_NoWeapon_Pickup_Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Prone_UpBody_HadWeapon_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_UpBody_NoWeapon_Pickup_Item() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_UpBody_NoWeapon_Pickup_Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_UpBody_HadWeapon_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_SwimEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_SwimPutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_SwimIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_SwimFireIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_Swimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_FireSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_SlideToSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_LeftHand_UnEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_EquipLeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATENAME_JumpIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TRANSITION_Alive_2_Sprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TRANSITION_Move_2_Sprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TRANSITION_SlideToSprint_2_Sprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_TRIGGER_NAME_IsMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_FLOAT_NAME_MoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_FLOAT_NAME_LeftHandPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_BOOL_NAME_IsSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_BOOL_NAME_IsOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_BOOL_NAME_IsSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_BOOL_NAME_IsSwimFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_BOOL_NAME_IsLeftHandSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_TRIGGER_NAME_Paint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_TRIGGER_NAME_LeftHandFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_TRIGGER_NAME_RootMotionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_NAME_DualSubWeaponLeftClavAbsolute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TRIGGER_NAME_Land() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ANIMATOR_FLOAT_NAME_LandHard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TRIGGER_NAME_Jump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AimmingOnBR_Suffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AimmingOn_Suffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UmAimmingOnBR_Suffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UmAimmingOn_Suffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ProneChangeClip_Suffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FP_ANIMATION_RIGS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EXTRA_BONES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_RUNNING_STATE_MACHINES_BASE_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_RUNNING_STATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_STOP_STATE_BASE_LAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_RUNNING_STATE_MACHINES_UPPERBODY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_RUNNING_STATE_UPPERBODY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_RUNNING_STATE_UPPERBODY_OVERRIDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_RUNNING_STATES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& IK_LEFT_HAND_FREE_STATES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PAimingMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PProneRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PFireMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PPutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PEquipW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1PPutDownW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_ProneCrawlBwd_Camera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_ProneCrawlFwd_Camera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_ProneCrawlLT_Camera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_ProneCrawlRT_Camera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_Vaulting_Climb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_AimingOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_AimingOn_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_UnAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_UnAiming_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_1P_M_AimedChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PChangeClipStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PChangeClipLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PChangeClipEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PCrouchMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PCrouchSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PProneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PGetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PProneGetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PPutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PPronePutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PStandToCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PCrouchToStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PStandToProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PProneToStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PCrouchToProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PProneToCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PSwimGetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_3PSwimPutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_ChangeClipEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_GrenadeStandFireStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_GrenadeProneFireStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ClipNameKeys_GrenadeCrouchFireStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = bool> static T& EnableRogdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = bool> static T& EnableForceRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD9);
	}
	template <typename T = float> static T& NormalUpdateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = float> static T& InvisibleUpdateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = bool> static T& EnableNormalAnimatorOptimize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = bool> static T& EnableLimitAniamtorFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE5);
	}
	template <typename T = bool> static T& EnableFPAnimationSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE6);
	}
	template <typename T = bool> static T& EnableFPAnimationSyncInStandAlone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE7);
	}
	template <typename T = bool> static T& EnableAnimatorLODAtEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = bool> static T& EnableAniamtorLODAtMobile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE9);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_WeaponMoveClipBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& m_WeaponCategoryToIndexMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_DEAD_ANI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_DEAD_FRONT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_DEAD_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_DEAD_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_DEAD_BACK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_DEAD_FRONT_HEADSHOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = Il2CppString*> static T& STAND_DEAD_LEFT_HEADSHOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = Il2CppString*> static T& STAND_DEAD_RIGHT_HEADSHOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = Il2CppString*> static T& STAND_DEAD_BACK_HEADSHOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CROUCH_DEAD_FRONT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = Il2CppString*> static T& CROUCH_DEAD_BACK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = Il2CppString*> static T& CROUCH_DEAD_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = Il2CppString*> static T& CROUCH_DEAD_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = Il2CppString*> static T& PRONE_DEAD_FRONT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = Il2CppString*> static T& SWIMMING_DEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = Il2CppString*> static T& DYING_DEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = Il2CppString*> static T& STAND_BURNDEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = Il2CppString*> static T& CROUCH_BURNDEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = Il2CppString*> static T& PRONE_BURNDEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = Il2CppString*> static T& CROUCH_LIGHTING_SHOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = Il2CppString*> static T& PRONE_LIGHTING_SHOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_LIGHTING_SHOCKS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_LIGHTING_SHOCKS_IDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& STAND_LIGHTING_SHOCKS_TO_DEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = unsigned char> static T& DIRECTION_FRONT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = unsigned char> static T& DIRECTION_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x155);
	}
	template <typename T = unsigned char> static T& DIRECTION_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x156);
	}
	template <typename T = unsigned char> static T& DIRECTION_BACK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x157);
	}
	template <typename T = float> static T& AIMING_MOVE_SPEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = float> static T& NORMAL_MOVE_SPEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& m_RecordNameHashDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedUpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCacheAnimatorParameterInLateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnimatorOptmizeRebind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorIsOptmizeRebind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCacheParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimatorIsOptmizeRebind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponClipBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMoveClipBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectRandomAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClipStatName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetAnimatorStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExtraBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStateNameByHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpAnimatorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetKeyNames(uintptr_t clipNameType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B58FE8))(0, clipNameType);
	}
	template <typename T = uintptr_t> static T GetClip(uintptr_t animatorController, uintptr_t clipNameType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B521F8))(0, animatorController, clipNameType);
	}
	template <typename T = bool> static T get_EnableAnimatorLOD() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B59BD8))(0);
	}
	template <typename T = bool> static T IsNeedUpdateAnimator() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B59C88))(0);
	}
	template <typename T = bool> static T ShouldCacheAnimatorParameterInLateUpdate() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B59D5C))(0);
	}
	template <typename T = bool> static T IsAnimatorOptmizeRebind() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B45924))(0);
	}
	template <typename T = void> static T SetAnimatorIsOptmizeRebind(bool optimizeRebind) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2B59E2C))(0, optimizeRebind);
	}
	template <typename T = bool> static T IsCacheParameter(uintptr_t animator) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B4A270))(0, animator);
	}
	template <typename T = void> static T InitAnimatorIsOptmizeRebind() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B59FA4))(0);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> static T GetWeaponClipBaseInfo(uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B5A090))(0, weaponName);
	}
	template <typename T = Il2CppVector2> static T GetWeaponMoveClipBaseInfo(uintptr_t weaponName, uintptr_t moveClipType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B5A328))(0, weaponName, moveClipType);
	}
	template <typename T = void> static T SelectRandomAnim(Il2CppArray<uintptr_t>* animArray, uintptr_t animName) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2B5A484))(0, animArray, animName);
	}
	template <typename T = Il2CppString*> static T GetClipStatName(uintptr_t clipType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B5A5A4))(0, clipType);
	}
	template <typename T = void> static T SetAnimatorStateSpeed(uintptr_t animator, int32_t layerIndex, Il2CppString* stateName, float speed) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, float))(Il2CppBase() + 0x2B5A788))(0, animator, layerIndex, stateName, speed);
	}
	template <typename T = void> static T SetAnimatorStateSpeed_1(uintptr_t animator, int32_t layerIndex, int32_t nameHash, float speed) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x2B5A914))(0, animator, layerIndex, nameHash, speed);
	}
	template <typename T = bool> static T CheckRuntimeAnimatorController(uintptr_t animator, uintptr_t animatorController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B5AA90))(0, animator, animatorController);
	}
	template <typename T = void> static T SetRuntimeController(uintptr_t animator, uintptr_t animatorController) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B554CC))(0, animator, animatorController);
	}
	template <typename T = bool> static T IsExtraBone(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B5AC0C))(0, boneName);
	}
	template <typename T = Il2CppString*> static T GetStateNameByHash(int32_t nameHash) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2B5ADBC))(0, nameHash);
	}
	template <typename T = void> static T DumpAnimatorInfo(uintptr_t animator) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B4E5D0))(0, animator);
	}

};

}
