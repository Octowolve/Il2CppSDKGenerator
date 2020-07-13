#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class PlayerIconSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "PlayerIconSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CONST_SOCIAL_HEADICON_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& CONST_NONE_FRAMEID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mAvailableHeadIconIdList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mIsCloseAvatar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestPlayerIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewIconAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewIconFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewIconFrameNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIsNewFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHasNewIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHasNewUnlockAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHasNewUnlockFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIconNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSocialHeadToNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeSocialHeadToNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomHeadID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToBigHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCSAccountPictureInfoChangeNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_IS_CLOSE_AVATAR() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x2916DD8))(this);
	}
	template <typename T = void> T set_IS_CLOSE_AVATAR(bool value) {
		return ((T (*)(PlayerIconSystemAssist*, bool))(Il2CppBase() + 0x2916DE0))(this, value);
	}
	template <typename T = void> T RequestPlayerIcon() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x2916DE8))(this);
	}
	template <typename T = void> T SetNewIconAvatar(bool bNew) {
		return ((T (*)(PlayerIconSystemAssist*, bool))(Il2CppBase() + 0x2916F18))(this, bNew);
	}
	template <typename T = void> T SetNewIconFrame(bool bNew) {
		return ((T (*)(PlayerIconSystemAssist*, bool))(Il2CppBase() + 0x290F0A4))(this, bNew);
	}
	template <typename T = void> T SetNewIconFrameNum() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x291688C))(this);
	}
	template <typename T = bool> T GetIsNewFrame() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x2917220))(this);
	}
	template <typename T = void> T SetHasNewIcon() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x29173C4))(this);
	}
	template <typename T = bool> T CheckHasNewUnlockAvatar() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x291748C))(this);
	}
	template <typename T = bool> T CheckHasNewUnlockFrame() {
		return ((T (*)(PlayerIconSystemAssist*))(Il2CppBase() + 0x290D804))(this);
	}
	template <typename T = void> T SetNewIcon(int32_t iconId) {
		return ((T (*)(PlayerIconSystemAssist*, int32_t))(Il2CppBase() + 0x29175D8))(this, iconId);
	}
	template <typename T = bool> T IsIconNew(int32_t iconId) {
		return ((T (*)(PlayerIconSystemAssist*, int32_t))(Il2CppBase() + 0x29166BC))(this, iconId);
	}
	template <typename T = uintptr_t> T ChangeSocialHeadToNormal(uintptr_t info, uint64_t playerID) {
		return ((T (*)(PlayerIconSystemAssist*, uintptr_t, uint64_t))(Il2CppBase() + 0x29177B4))(this, info, playerID);
	}
	template <typename T = int32_t> T ChangeSocialHeadToNormal_1(int32_t pic_ID, uint64_t playerID) {
		return ((T (*)(PlayerIconSystemAssist*, int32_t, uint64_t))(Il2CppBase() + 0x2917B08))(this, pic_ID, playerID);
	}
	template <typename T = int32_t> T RandomHeadID(uint64_t playerID) {
		return ((T (*)(PlayerIconSystemAssist*, uint64_t))(Il2CppBase() + 0x291794C))(this, playerID);
	}
	template <typename T = Il2CppString*> T ChangeToBigHead(Il2CppString* headURL) {
		return ((T (*)(PlayerIconSystemAssist*, Il2CppString*))(Il2CppBase() + 0x2917C68))(this, headURL);
	}
	template <typename T = void> T GetCSAccountPictureInfoChangeNtf(uintptr_t Ntf) {
		return ((T (*)(PlayerIconSystemAssist*, uintptr_t))(Il2CppBase() + 0x2917FB8))(this, Ntf);
	}

};

}
