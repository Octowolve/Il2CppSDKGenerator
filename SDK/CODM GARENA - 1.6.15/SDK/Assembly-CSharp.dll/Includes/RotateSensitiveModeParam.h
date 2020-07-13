#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateSensitiveModeParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateSensitiveModeParam"));
	}

	template <typename T = uintptr_t> T& mSensitiveModeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RotateSensitiveDataArr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& ERST_Values() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_SensitiveModeType() {
		return ((T (*)(RotateSensitiveModeParam*))(Il2CppBase() + 0x41469A8))(this);
	}
	template <typename T = Il2CppString*> T GetKey(uintptr_t type) {
		return ((T (*)(RotateSensitiveModeParam*, uintptr_t))(Il2CppBase() + 0x4147298))(this, type);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(RotateSensitiveModeParam*))(Il2CppBase() + 0x414524C))(this);
	}
	template <typename T = uintptr_t> T GetData(uintptr_t type) {
		return ((T (*)(RotateSensitiveModeParam*, uintptr_t))(Il2CppBase() + 0x4147428))(this, type);
	}
	template <typename T = float> T GetRotateSensitive(uintptr_t type) {
		return ((T (*)(RotateSensitiveModeParam*, uintptr_t))(Il2CppBase() + 0x4145B80))(this, type);
	}
	template <typename T = uintptr_t> T GetConfig(uintptr_t type) {
		return ((T (*)(RotateSensitiveModeParam*, uintptr_t))(Il2CppBase() + 0x414602C))(this, type);
	}
	template <typename T = void> T SetRotateSensitive(uintptr_t type, float value) {
		return ((T (*)(RotateSensitiveModeParam*, uintptr_t, float))(Il2CppBase() + 0x414596C))(this, type, value);
	}
	template <typename T = void> T CopyData(Il2CppArray<uintptr_t>* otherRotateSensitiveDataArr) {
		return ((T (*)(RotateSensitiveModeParam*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4147140))(this, otherRotateSensitiveDataArr);
	}
	template <typename T = void> T SetData(uintptr_t type, uintptr_t config) {
		return ((T (*)(RotateSensitiveModeParam*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4147530))(this, type, config);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RotateSensitiveModeParam*))(Il2CppBase() + 0x4145670))(this);
	}

};

}
