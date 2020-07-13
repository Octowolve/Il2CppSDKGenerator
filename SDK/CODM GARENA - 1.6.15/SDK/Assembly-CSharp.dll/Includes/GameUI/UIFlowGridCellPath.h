#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowGridCellPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowGridCellPath"));
	}

	template <typename T = int32_t> T& row() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_GreaterThan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_LessThan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T op_GreaterThan(uintptr_t path1, uintptr_t path2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AE2428))(0, path1, path2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t path1, uintptr_t path2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AE250C))(0, path1, path2);
	}

};

}
