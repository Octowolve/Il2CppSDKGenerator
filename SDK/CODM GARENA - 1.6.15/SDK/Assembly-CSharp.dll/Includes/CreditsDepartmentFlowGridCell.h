#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreditsDepartmentFlowGridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreditsDepartmentFlowGridCell"));
	}

	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DragScrollView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetData(Il2CppString* name) {
		return ((T (*)(CreditsDepartmentFlowGridCell*, Il2CppString*))(Il2CppBase() + 0x41555C8))(this, name);
	}

};

}
