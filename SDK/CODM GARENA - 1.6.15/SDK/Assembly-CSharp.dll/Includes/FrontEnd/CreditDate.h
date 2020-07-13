#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CreditDate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CreditDate"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& departments() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& departmentDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCreditDateToDepartment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEachCellRowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStartRowNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetCreditDateToDepartment(uintptr_t config) {
		return ((T (*)(CreditDate*, uintptr_t))(Il2CppBase() + 0x293498C))(this, config);
	}
	template <typename T = int32_t> T GetRowNumber() {
		return ((T (*)(CreditDate*))(Il2CppBase() + 0x2934D20))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEachCellRowNumber() {
		return ((T (*)(CreditDate*))(Il2CppBase() + 0x2934F00))(this);
	}
	template <typename T = void> T InitStartRowNum() {
		return ((T (*)(CreditDate*))(Il2CppBase() + 0x2934B74))(this);
	}
	template <typename T = uintptr_t> T GetCellType(int32_t row, int32_t column, uintptr_t columnPerRow, Il2CppArray<uintptr_t>* content) {
		return ((T (*)(CreditDate*, int32_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x29353EC))(this, row, column, columnPerRow, content);
	}

};

}
