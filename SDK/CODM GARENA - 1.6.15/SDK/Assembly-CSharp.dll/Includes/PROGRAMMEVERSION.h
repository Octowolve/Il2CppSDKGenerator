#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PROGRAMMEVERSION
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PROGRAMMEVERSION"));
	}

	template <typename T = uint16_t> T& MajorVersion_Number() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint16_t> T& MinorVersion_Number() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = uint16_t> T& Revision_Number() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
