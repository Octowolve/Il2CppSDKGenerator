#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DownloadRecordFileCompleteEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DownloadRecordFileCompleteEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* filepath, Il2CppString* fileid) {
		return ((T (*)(DownloadRecordFileCompleteEventHandler*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45429A4))(this, code, filepath, fileid);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* filepath, Il2CppString* fileid, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DownloadRecordFileCompleteEventHandler*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454B878))(this, code, filepath, fileid, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DownloadRecordFileCompleteEventHandler*, uintptr_t))(Il2CppBase() + 0x454B93C))(this, result);
	}

};

}
