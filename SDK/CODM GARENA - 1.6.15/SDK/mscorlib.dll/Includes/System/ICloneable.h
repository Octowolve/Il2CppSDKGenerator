#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ICloneable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ICloneable"));
	}


	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ICloneable*))(Il2CppBase() + 0x0))(this);
	}

};

}
