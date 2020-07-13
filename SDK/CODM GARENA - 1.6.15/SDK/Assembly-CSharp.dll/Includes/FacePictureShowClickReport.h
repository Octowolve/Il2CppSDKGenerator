#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureShowClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureShowClickReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_FacePicID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_ShowFacePic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_ClickFacePic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_FacePictureType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(FacePictureShowClickReport*))(Il2CppBase() + 0x4675C4C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(Il2CppString* Pic_Id, bool Pic_Show, bool Pic_Click, int32_t FacePictureType, uintptr_t flag) {
		return ((T (*)(FacePictureShowClickReport*, Il2CppString*, bool, bool, int32_t, uintptr_t))(Il2CppBase() + 0x4675CC4))(this, Pic_Id, Pic_Show, Pic_Click, FacePictureType, flag);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(FacePictureShowClickReport*))(Il2CppBase() + 0x4675E40))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(FacePictureShowClickReport*))(Il2CppBase() + 0x4676114))(this);
	}

};

}
