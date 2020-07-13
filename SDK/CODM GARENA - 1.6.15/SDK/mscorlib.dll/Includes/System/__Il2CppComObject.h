#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Il2CppComObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "__Il2CppComObject"));
	}


	template <typename T = void> T Finalize() {
		return ((T (*)(Il2CppComObject*))(Il2CppBase() + 0x3FC79CC))(this);
	}

};

}
