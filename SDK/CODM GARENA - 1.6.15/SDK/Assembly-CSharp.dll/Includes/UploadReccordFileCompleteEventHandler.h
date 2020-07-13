#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UploadReccordFileCompleteEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UploadReccordFileCompleteEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* filepath, Il2CppString* fileid) {
		return ((T (*)(UploadReccordFileCompleteEventHandler*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45428FC))(this, code, filepath, fileid);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* filepath, Il2CppString* fileid, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UploadReccordFileCompleteEventHandler*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454CDC4))(this, code, filepath, fileid, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UploadReccordFileCompleteEventHandler*, uintptr_t))(Il2CppBase() + 0x454CE88))(this, result);
	}

};

}
