#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveRecFileIndexEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveRecFileIndexEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* fileid, int32_t fileindex) {
		return ((T (*)(SaveRecFileIndexEventHandler*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x45430D0))(this, code, fileid, fileindex);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* fileid, int32_t fileindex, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SaveRecFileIndexEventHandler*, uintptr_t, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C700))(this, code, fileid, fileindex, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SaveRecFileIndexEventHandler*, uintptr_t))(Il2CppBase() + 0x454C7E0))(this, result);
	}

};

}
