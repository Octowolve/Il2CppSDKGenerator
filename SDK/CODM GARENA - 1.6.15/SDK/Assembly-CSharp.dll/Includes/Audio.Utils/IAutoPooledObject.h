#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class IAutoPooledObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "IAutoPooledObject"));
	}


	template <typename T = bool> T IsUnUsed() {
		return ((T (*)(IAutoPooledObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
