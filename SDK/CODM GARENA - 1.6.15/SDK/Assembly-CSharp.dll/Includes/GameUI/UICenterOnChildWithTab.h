#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICenterOnChildWithTab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICenterOnChildWithTab"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& TabList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TabTemplate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TabGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CenterOnChild() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CenterOnChildGrid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ActiveCount() {
		return *(T*)((uintptr_t)this + 0x20);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ResizeTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICenterOnChildWithTab*))(Il2CppBase() + 0x29D18F4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UICenterOnChildWithTab*))(Il2CppBase() + 0x29D1B20))(this);
	}
	template <typename T = void> T ResizeTab() {
		return ((T (*)(UICenterOnChildWithTab*))(Il2CppBase() + 0x29D1FEC))(this);
	}
	template <typename T = void> T RefreshTab(uintptr_t centerObj) {
		return ((T (*)(UICenterOnChildWithTab*, uintptr_t))(Il2CppBase() + 0x29D1C40))(this, centerObj);
	}

};

}
