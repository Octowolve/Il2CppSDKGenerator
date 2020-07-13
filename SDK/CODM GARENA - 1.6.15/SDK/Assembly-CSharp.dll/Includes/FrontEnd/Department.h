#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class Department
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "Department"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& groups() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& groupDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& startRowNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStaff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStartRowNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T AddStaff(uintptr_t config) {
		return ((T (*)(Department*, uintptr_t))(Il2CppBase() + 0x3674138))(this, config);
	}
	template <typename T = int32_t> T GetRowNumber() {
		return ((T (*)(Department*))(Il2CppBase() + 0x3674500))(this);
	}
	template <typename T = void> T InitStartRowNum() {
		return ((T (*)(Department*))(Il2CppBase() + 0x36747C0))(this);
	}
	template <typename T = uintptr_t> T GetCellType(int32_t row, int32_t column, uintptr_t columnPerRow, Il2CppArray<uintptr_t>* content) {
		return ((T (*)(Department*, int32_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3674928))(this, row, column, columnPerRow, content);
	}

};

}
