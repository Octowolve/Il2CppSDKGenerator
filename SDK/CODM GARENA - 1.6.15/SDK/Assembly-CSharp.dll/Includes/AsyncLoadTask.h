#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncLoadTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AsyncLoadTask"));
	}

	template <typename T = int32_t> T& AssetId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Generation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Callback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CallBackData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(AsyncLoadTask*))(Il2CppBase() + 0x2B979F8))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(AsyncLoadTask*, bool))(Il2CppBase() + 0x2B97A00))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(AsyncLoadTask*))(Il2CppBase() + 0x2B97A08))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AsyncLoadTask*))(Il2CppBase() + 0x2B97AB8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(AsyncLoadTask*))(Il2CppBase() + 0x2B97C08))(this);
	}

};

}
