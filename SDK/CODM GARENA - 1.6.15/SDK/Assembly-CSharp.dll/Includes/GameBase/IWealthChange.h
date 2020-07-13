#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IWealthChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IWealthChange"));
	}


	template <typename T = void> T WealthChange() {
		return ((T (*)(IWealthChange*))(Il2CppBase() + 0x0))(this);
	}

};

}
