#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Il2CppComDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "__Il2CppComDelegate"));
	}


	template <typename T = void> T Finalize() {
		return ((T (*)(Il2CppComDelegate*))(Il2CppBase() + 0x3FC79C8))(this);
	}

};

}
