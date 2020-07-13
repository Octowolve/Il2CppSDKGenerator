#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IFormatProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IFormatProvider"));
	}


	template <typename T = uintptr_t> T GetFormat(uintptr_t formatType) {
		return ((T (*)(IFormatProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, formatType);
	}

};

}
