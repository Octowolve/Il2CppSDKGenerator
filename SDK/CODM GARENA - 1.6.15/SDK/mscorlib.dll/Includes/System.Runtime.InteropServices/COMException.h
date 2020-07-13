#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class COMException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "COMException"));
	}


	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(COMException*))(Il2CppBase() + 0x4FDF7CC))(this);
	}

};

}
