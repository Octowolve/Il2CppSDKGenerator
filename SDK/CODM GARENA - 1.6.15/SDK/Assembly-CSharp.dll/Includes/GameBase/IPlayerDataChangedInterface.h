#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IPlayerDataChangedInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IPlayerDataChangedInterface"));
	}


	template <typename T = void> T RefreshPlayerData(uintptr_t data) {
		return ((T (*)(IPlayerDataChangedInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}

};

}
