#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LoadAssetBundleErrno
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LoadAssetBundleErrno"));
	}

	template <typename T = int32_t> static T& kErrNoGenerationWrong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kErrManifestMissing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kErrAsyncOpNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kErrLoadBundleCorrupted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kErrNotAllowAsyncLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kErrBundleIndexIllegal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kErrOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFatalError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T HasFatalError() {
		return ((T (*)(LoadAssetBundleErrno*))(Il2CppBase() + 0x2497B5C))(this);
	}
	template <typename T = bool> T HasError() {
		return ((T (*)(LoadAssetBundleErrno*))(Il2CppBase() + 0x2497C00))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadAssetBundleErrno*))(Il2CppBase() + 0x2497CA8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoadAssetBundleErrno*))(Il2CppBase() + 0x2497D4C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(LoadAssetBundleErrno*))(Il2CppBase() + 0x2497E88))(this);
	}

};

}
