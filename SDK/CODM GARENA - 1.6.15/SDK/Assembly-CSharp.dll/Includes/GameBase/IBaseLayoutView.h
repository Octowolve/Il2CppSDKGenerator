#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IBaseLayoutView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IBaseLayoutView"));
	}


	template <typename T = void> T UpdateBg(bool isChange) {
		return ((T (*)(IBaseLayoutView*, bool))(Il2CppBase() + 0x0))(this, isChange);
	}

};

}
