#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32.SafeHandles {

class SafeHandleZeroOrMinusOneIsInvalid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid"));
	}


	template <typename T = bool> T get_IsInvalid() {
		return ((T (*)(SafeHandleZeroOrMinusOneIsInvalid*))(Il2CppBase() + 0x3F89B1C))(this);
	}

};

}
