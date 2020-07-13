#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IMsg"));
	}


	template <typename T = uint32_t> T get_UIN() {
		return ((T (*)(IMsg*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T get_CommandID() {
		return ((T (*)(IMsg*))(Il2CppBase() + 0x0))(this);
	}

};

}
