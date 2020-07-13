#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AutoAdapterWidgetWidth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AutoAdapterWidgetWidth"));
	}

	template <typename T = uintptr_t> T& SelfWidget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TargetWidget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WidgetBuff() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& WidthOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MAX_TITLE_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& tryCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AutoAdapterWidgetWidth*))(Il2CppBase() + 0x2D68964))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AutoAdapterWidgetWidth*))(Il2CppBase() + 0x2D68A08))(this);
	}

};

}
