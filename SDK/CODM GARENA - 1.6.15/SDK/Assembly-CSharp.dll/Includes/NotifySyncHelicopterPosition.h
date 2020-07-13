#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifySyncHelicopterPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifySyncHelicopterPosition"));
	}


	template <typename T = void> T Invoke(Il2CppList<Il2CppVector3>* pos, Il2CppList<bool>* bHasBeenUsed, bool bClearCachedResult) {
		return ((T (*)(NotifySyncHelicopterPosition*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool))(Il2CppBase() + 0x24E2AA0))(this, pos, bHasBeenUsed, bClearCachedResult);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppList<Il2CppVector3>* pos, Il2CppList<bool>* bHasBeenUsed, bool bClearCachedResult, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NotifySyncHelicopterPosition*, Il2CppList<Il2CppVector3>*, Il2CppList<bool>*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x24E2DC4))(this, pos, bHasBeenUsed, bClearCachedResult, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NotifySyncHelicopterPosition*, uintptr_t))(Il2CppBase() + 0x24E2E8C))(this, result);
	}

};

}
