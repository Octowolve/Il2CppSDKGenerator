#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AsyncLoadAssetTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AsyncLoadAssetTask"));
	}

	template <typename T = int16_t> T& targetBundleIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& assetName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& loadState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& asset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartQueuing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Destroy() {
		return ((T (*)(AsyncLoadAssetTask*))(Il2CppBase() + 0x35CC420))(this);
	}
	template <typename T = bool> T get_IsWaiting() {
		return ((T (*)(AsyncLoadAssetTask*))(Il2CppBase() + 0x35CC4D4))(this);
	}
	template <typename T = void> T StartQueuing() {
		return ((T (*)(AsyncLoadAssetTask*))(Il2CppBase() + 0x35CC4EC))(this);
	}
	template <typename T = void> T StartLoading() {
		return ((T (*)(AsyncLoadAssetTask*))(Il2CppBase() + 0x35CC590))(this);
	}
	template <typename T = void> T SetResult(uintptr_t obj) {
		return ((T (*)(AsyncLoadAssetTask*, uintptr_t))(Il2CppBase() + 0x35CC634))(this, obj);
	}
	template <typename T = uintptr_t> T GetResult() {
		return ((T (*)(AsyncLoadAssetTask*))(Il2CppBase() + 0x35CC6E4))(this);
	}

};

}
