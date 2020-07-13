#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_FacePictureDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetFacePicReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetFacePicRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSetFacePicTimesShowReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_FacePictureDS() {
		return ((T (*)(FacePictureDataAgent*))(Il2CppBase() + 0x4BDD668))(this);
	}
	template <typename T = bool> T SendGetFacePicReq() {
		return ((T (*)(FacePictureDataAgent*))(Il2CppBase() + 0x4BDD718))(this);
	}
	template <typename T = bool> T OnGetFacePicRes(uintptr_t message) {
		return ((T (*)(FacePictureDataAgent*, uintptr_t))(Il2CppBase() + 0x4BDD8CC))(this, message);
	}
	template <typename T = bool> T SendSetFacePicTimesShowReq(Il2CppList<uintptr_t>* list) {
		return ((T (*)(FacePictureDataAgent*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4BDE3B0))(this, list);
	}

};

}
