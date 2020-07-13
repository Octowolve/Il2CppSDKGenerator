#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ElectronicSportsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElectronicSportsData"));
	}

	template <typename T = Il2CppString*> T& m_WebUrl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_ImgLocalResource() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_ImgCdnResource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ModeCategory() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_FirstLineDesc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_SecondLineDesc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CountDowns() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportCountDown() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_ColorChangeDays() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isInCountDowns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_WebUrl() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC067C))(this);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC0684))(this);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC068C))(this);
	}
	template <typename T = Il2CppString*> T get_ImgLocalResource() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC0694))(this);
	}
	template <typename T = Il2CppString*> T get_ImgCdnResource() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC069C))(this);
	}
	template <typename T = int32_t> T get_ModeCategory() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC06A4))(this);
	}
	template <typename T = Il2CppString*> T get_FirstLineDesc() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC06AC))(this);
	}
	template <typename T = Il2CppString*> T get_SecondLineDesc() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC06B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CountDowns() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC06BC))(this);
	}
	template <typename T = uintptr_t> T get_ElectronicSportCountDown() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC06C4))(this);
	}
	template <typename T = int32_t> T get_ColorChangeDays() {
		return ((T (*)(ElectronicSportsData*))(Il2CppBase() + 0x4BC06CC))(this);
	}
	template <typename T = bool> T isValid(int32_t serverTime, int32_t modeCategory) {
		return ((T (*)(ElectronicSportsData*, int32_t, int32_t))(Il2CppBase() + 0x4BC06D4))(this, serverTime, modeCategory);
	}
	template <typename T = bool> T isInCountDowns(int32_t serverTime) {
		return ((T (*)(ElectronicSportsData*, int32_t))(Il2CppBase() + 0x4BC07D0))(this, serverTime);
	}
	template <typename T = void> T SaveData(uintptr_t conf) {
		return ((T (*)(ElectronicSportsData*, uintptr_t))(Il2CppBase() + 0x4BC0A94))(this, conf);
	}

};

}
