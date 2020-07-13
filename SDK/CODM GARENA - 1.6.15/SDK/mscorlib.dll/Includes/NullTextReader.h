#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NullTextReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "NullTextReader"));
	}


	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(NullTextReader*))(Il2CppBase() + 0x4008830))(this);
	}

};

}
