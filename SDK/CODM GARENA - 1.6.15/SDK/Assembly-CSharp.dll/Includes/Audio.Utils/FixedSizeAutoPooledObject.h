#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class FixedSizeAutoPooledObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "FixedSizeAutoPooledObject"));
	}


	template <typename T = bool> T IsUnUsed() {
		return ((T (*)(FixedSizeAutoPooledObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ForceRecycle() {
		return ((T (*)(FixedSizeAutoPooledObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(FixedSizeAutoPooledObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
