#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class RawObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "RawObject"));
	}


	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(RawObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
