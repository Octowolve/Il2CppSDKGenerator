#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIXSizeAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIXSizeAdaptor"));
	}

	template <typename T = uintptr_t> T& mContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& originWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mProtected() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIXSizeAdaptor*))(Il2CppBase() + 0x4A005D4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIXSizeAdaptor*))(Il2CppBase() + 0x4A00AB4))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(UIXSizeAdaptor*, bool))(Il2CppBase() + 0x4A00B58))(this, pause);
	}
	template <typename T = void> T Resize() {
		return ((T (*)(UIXSizeAdaptor*))(Il2CppBase() + 0x4A00678))(this);
	}

};

}
