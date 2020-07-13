#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowCell"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& onSelectCell() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(UIFlowCell*, int32_t))(Il2CppBase() + 0x3ADB910))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(UIFlowCell*))(Il2CppBase() + 0x3ADB918))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIFlowCell*))(Il2CppBase() + 0x3ADB920))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(UIFlowCell*))(Il2CppBase() + 0x3ADBB90))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIFlowCell*))(Il2CppBase() + 0x3ADBC28))(this);
	}
	template <typename T = void> T SetHighlight(bool isShow) {
		return ((T (*)(UIFlowCell*, bool))(Il2CppBase() + 0x3ADBCF4))(this, isShow);
	}

};

}
