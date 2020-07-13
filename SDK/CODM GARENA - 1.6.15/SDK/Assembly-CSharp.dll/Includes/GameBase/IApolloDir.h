#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IApolloDir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IApolloDir"));
	}


	template <typename T = void> T QueryDir(uintptr_t callback) {
		return ((T (*)(IApolloDir*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T ClearDir() {
		return ((T (*)(IApolloDir*))(Il2CppBase() + 0x0))(this);
	}

};

}
