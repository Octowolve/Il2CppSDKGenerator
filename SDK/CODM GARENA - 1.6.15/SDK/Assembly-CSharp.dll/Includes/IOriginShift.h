#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOriginShift
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOriginShift"));
	}


	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(IOriginShift*, Il2CppVector3))(Il2CppBase() + 0x0))(this, shift);
	}

};

}
