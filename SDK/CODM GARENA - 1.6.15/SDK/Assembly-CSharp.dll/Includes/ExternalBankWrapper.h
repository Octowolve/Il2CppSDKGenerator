#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExternalBankWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExternalBankWrapper"));
	}


	template <typename T = void> static T RegisterExternalBank(Il2CppString* strBankName, Il2CppString* strBankPath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4BDCAEC))(0, strBankName, strBankPath);
	}
	template <typename T = void> static T UnRegisterExternalBank(Il2CppString* strBankName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4BDCC0C))(0, strBankName);
	}
	template <typename T = void> static T SetLogger(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BDCD0C))(0, jarg1);
	}
	template <typename T = void> static T SetLogger_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BDCE00))(0);
	}
	template <typename T = void> static T SetOBBPath(Il2CppString* strBankName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4BDCED0))(0, strBankName);
	}

};

}
