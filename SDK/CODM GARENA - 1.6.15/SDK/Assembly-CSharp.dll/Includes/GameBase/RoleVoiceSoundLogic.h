#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RoleVoiceSoundLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RoleVoiceSoundLogic"));
	}

	template <typename T = Il2CppString*> static T& ReferenceConfigFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ReferenceConfigFileBasePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& msInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mArrSpecialConfigs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListSpecialConfigs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneShotUsingViewingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SearchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TryLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DE6CD4))(0);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DE6E30))(0);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(RoleVoiceSoundLogic*))(Il2CppBase() + 0x2DE6F34))(this);
	}
	template <typename T = void> T PlayOneShot(Il2CppString* strEventID, Il2CppVector3 vecPos) {
		return ((T (*)(RoleVoiceSoundLogic*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x2DE7854))(this, strEventID, vecPos);
	}
	template <typename T = void> T PlayOneShotUsingViewingTarget(Il2CppString* strEventID, Il2CppVector3 vecPos) {
		return ((T (*)(RoleVoiceSoundLogic*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x2DE7CF8))(this, strEventID, vecPos);
	}
	template <typename T = void> T PlayOneShot_1(uint64_t uRoleID, Il2CppString* strEventID, Il2CppVector3 vecPos) {
		return ((T (*)(RoleVoiceSoundLogic*, uint64_t, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x2DE7ABC))(this, uRoleID, strEventID, vecPos);
	}
	template <typename T = int32_t> T _SearchConfig(uint64_t uRoleID, Il2CppString* strEventID) {
		return ((T (*)(RoleVoiceSoundLogic*, uint64_t, Il2CppString*))(Il2CppBase() + 0x2DE805C))(this, uRoleID, strEventID);
	}
	template <typename T = uintptr_t> T _TryLoad(uint64_t uRoleID) {
		return ((T (*)(RoleVoiceSoundLogic*, uint64_t))(Il2CppBase() + 0x2DE72E4))(this, uRoleID);
	}

};

}
