#pragma once
#include <Il2Cpp/Il2Cpp.h>

class YYRules
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "YYRules"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& yyRule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T getRule(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2A8BBA0))(0, index);
	}

};

}
