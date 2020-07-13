#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class Utils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "Utils"));
	}

	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetUltimateRenderCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x38978C4))(0);
	}
	template <typename T = bool> static T HasContributingCameras(uintptr_t parentCamera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38834F8))(0, parentCamera);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindContributingCameras(uintptr_t parentCamera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38835C8))(0, parentCamera);
	}
	template <typename T = bool> static T ShowInExplorer(Il2CppString* itemPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3891574))(0, itemPath);
	}
	template <typename T = bool> static T OpenInDefaultApp(Il2CppString* itemPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x38916B0))(0, itemPath);
	}
	template <typename T = int64_t> static T GetFileSize(Il2CppString* filename) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3897B08))(0, filename);
	}
	template <typename T = int32_t> static T FindContributingCamerasm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3897BB8))(0, a, b);
	}

};

}
