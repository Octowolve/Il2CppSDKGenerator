#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MSDKWakeUpRetGameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MSDKWakeUpRetGameData"));
	}

	template <typename T = Il2CppString*> T& game_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
