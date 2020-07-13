#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatineeFinishCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatineeFinishCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(MatineeFinishCallback*))(Il2CppBase() + 0x19C4680))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(MatineeFinishCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C4710))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MatineeFinishCallback*, uintptr_t))(Il2CppBase() + 0x19C473C))(this, result);
	}

};

}
