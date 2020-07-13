#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArabicTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArabicTable"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mapList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& m_Lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& arabicMapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Convert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_ArabicMapper() {
		return ((T (*)(void *))(Il2CppBase() + 0x22CCF48))(0);
	}
	template <typename T = int32_t> T Convert(int32_t toBeConverted) {
		return ((T (*)(ArabicTable*, int32_t))(Il2CppBase() + 0x22CD190))(this, toBeConverted);
	}

};

}
