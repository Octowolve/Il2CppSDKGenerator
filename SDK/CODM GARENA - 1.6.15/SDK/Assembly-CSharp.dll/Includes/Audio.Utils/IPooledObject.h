#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class IPooledObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "IPooledObject"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(IPooledObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
