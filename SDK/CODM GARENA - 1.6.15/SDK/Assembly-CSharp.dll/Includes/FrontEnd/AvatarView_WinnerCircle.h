#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewWinnerCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarView_WinnerCircle"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Avatars() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CameraTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CameraWinnerCircleDefaultPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CameraDefaultPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CameraMinPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CameraMaxPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CameraMPMinPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& CameraMPMaxPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CameraFFAMinPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CameraFFAMaxPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WinnerCircleThreeCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WinnerCircleFourCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WinnerCircleTwoCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LocalCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OneCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TwoCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ThreeCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FourCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FiveCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SixCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SevenCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EightCharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CharacterSocketNames() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AvatarAnimatorList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NewAnimatorAtPos() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> static T& LeftWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RightWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RightBackWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LeftBackWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RPGWeapSocketName_R() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RPGWeapSocketName_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MeleeWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ScytheWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Type25WeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SMRSWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FHJWeapSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& BlackScreen() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> static T& maxWHValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& defaultWHValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& minWHValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& PlanarShadowLightName() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& ShadowLightTransform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PlanarShadow() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppDictionary<int32_t, uint32_t>*> T& pos_to_roleID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> static T& ACTION_SOUND_PREFIX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenaraAvatarItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectAvatarSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupPlanarShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMembers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCharacterInPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterRoleIDForAudioSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCharacterVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPlayCharacterVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActionListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCharacterActionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T GenaraAvatarItem(int32_t SquadMemberCount) {
		return ((T (*)(AvatarViewWinnerCircle*, int32_t))(Il2CppBase() + 0x28F6694))(this, SquadMemberCount);
	}
	template <typename T = void> T SelectAvatarSocket(int32_t avatarCount, uintptr_t posMode) {
		return ((T (*)(AvatarViewWinnerCircle*, int32_t, uintptr_t))(Il2CppBase() + 0x28F6848))(this, avatarCount, posMode);
	}
	template <typename T = void> T InitCameraPos(bool isWinnerCircle) {
		return ((T (*)(AvatarViewWinnerCircle*, bool))(Il2CppBase() + 0x28F6990))(this, isWinnerCircle);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarViewWinnerCircle*))(Il2CppBase() + 0x28F6D10))(this);
	}
	template <typename T = bool> T SetupPlanarShadow(uintptr_t inCharacter, uintptr_t inLeftWeapon, uintptr_t inRightWeapon) {
		return ((T (*)(AvatarViewWinnerCircle*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x28F6E78))(this, inCharacter, inLeftWeapon, inRightWeapon);
	}
	template <typename T = uintptr_t> T GetAvatarItem(int32_t pos) {
		return ((T (*)(AvatarViewWinnerCircle*, int32_t))(Il2CppBase() + 0x28F7470))(this, pos);
	}
	template <typename T = void> T HideAllMembers() {
		return ((T (*)(AvatarViewWinnerCircle*))(Il2CppBase() + 0x28F75E0))(this);
	}
	template <typename T = void> T ChangeCharacterInPos(int32_t roleID, uintptr_t assetID, int32_t bagAssetID, int32_t hatAsset, int32_t clothAsset, int32_t posIndex, uintptr_t animType, Il2CppString* gesAnim, Il2CppString* leftHandAnimName, Il2CppString* rightHandAnimName, Il2CppArray<uintptr_t>* idleAnimIndexs) {
		return ((T (*)(AvatarViewWinnerCircle*, int32_t, uintptr_t, int32_t, int32_t, int32_t, int32_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x28F773C))(this, roleID, assetID, bagAssetID, hatAsset, clothAsset, posIndex, animType, gesAnim, leftHandAnimName, rightHandAnimName, idleAnimIndexs);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(AvatarViewWinnerCircle*))(Il2CppBase() + 0x28F79EC))(this);
	}
	template <typename T = void> T RegisterRoleIDForAudioSystem(int32_t pos, uint32_t roleID) {
		return ((T (*)(AvatarViewWinnerCircle*, int32_t, uint32_t))(Il2CppBase() + 0x28F78C0))(this, pos, roleID);
	}
	template <typename T = void> T PlayCharacterVoice(uintptr_t go, int32_t pos) {
		return ((T (*)(AvatarViewWinnerCircle*, uintptr_t, int32_t))(Il2CppBase() + 0x28DD17C))(this, go, pos);
	}
	template <typename T = void> static T DoPlayCharacterVoice(uintptr_t go, uint32_t RoleID) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x28F7AE0))(0, go, RoleID);
	}
	template <typename T = void> T SetActionListener(uintptr_t assetGO, int32_t pos, uint64_t weaponID) {
		return ((T (*)(AvatarViewWinnerCircle*, uintptr_t, int32_t, uint64_t))(Il2CppBase() + 0x28DCFE4))(this, assetGO, pos, weaponID);
	}
	template <typename T = void> T PlayCharacterActionSound(int32_t pos) {
		return ((T (*)(AvatarViewWinnerCircle*, int32_t))(Il2CppBase() + 0x28F7D0C))(this, pos);
	}

};

}
