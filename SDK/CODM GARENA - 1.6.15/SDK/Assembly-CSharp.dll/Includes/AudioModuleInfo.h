#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioModuleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioModuleInfo"));
	}

	template <typename T = Il2CppString*> T& _audioName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneModuleFileListWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMultiModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtomicModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecResultCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecProgressCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T GetOneModuleFileListWrapper(Il2CppString* oneModuleName, uintptr_t moduleResQuality) {
		return ((T (*)(AudioModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3319728))(this, oneModuleName, moduleResQuality);
	}
	template <typename T = bool> T IsMultiModule() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319858))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAtomicModuleList() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x33198F8))(this);
	}
	template <typename T = void> T ExecResultCallBack() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319998))(this);
	}
	template <typename T = void> T ExecProgressCallBack() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319A30))(this);
	}
	template <typename T = void> T ClearAllCallBack() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319AC8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetOneModuleFileListWrapper(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(AudioModuleInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3319B60))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMultiModule() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319B64))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetAtomicModuleList() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319B68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExecResultCallBack() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319B6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ExecProgressCallBack() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319B70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ClearAllCallBack() {
		return ((T (*)(AudioModuleInfo*))(Il2CppBase() + 0x3319B74))(this);
	}

};

}
