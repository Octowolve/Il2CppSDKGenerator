#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecordData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecordData"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& RecordTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
