#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunkLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunkLine"));
	}

	template <typename T = bool> T& IsFull() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChunk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HorzAlign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VertAlign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnAcquire() {
		return ((T (*)(DeviceChunkLine*))(Il2CppBase() + 0x475F070))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(DeviceChunkLine*))(Il2CppBase() + 0x475F118))(this);
	}
	template <typename T = void> T Clear(bool releaseItems) {
		return ((T (*)(DeviceChunkLine*, bool))(Il2CppBase() + 0x475F1C0))(this, releaseItems);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Chunks() {
		return ((T (*)(DeviceChunkLine*))(Il2CppBase() + 0x475F3C8))(this);
	}
	template <typename T = int32_t> T get_AvailWidth() {
		return ((T (*)(DeviceChunkLine*))(Il2CppBase() + 0x475B5FC))(this);
	}
	template <typename T = bool> T AddChunk(uintptr_t chunk, bool prevIsWord) {
		return ((T (*)(DeviceChunkLine*, uintptr_t, bool))(Il2CppBase() + 0x475AB90))(this, chunk, prevIsWord);
	}
	template <typename T = void> T HorzAlign(uintptr_t align) {
		return ((T (*)(DeviceChunkLine*, uintptr_t))(Il2CppBase() + 0x475CB58))(this, align);
	}
	template <typename T = void> T VertAlign(uintptr_t align) {
		return ((T (*)(DeviceChunkLine*, uintptr_t))(Il2CppBase() + 0x475CFA0))(this, align);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DeviceChunkLine*))(Il2CppBase() + 0x475F3D0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(DeviceChunkLine*))(Il2CppBase() + 0x475F528))(this);
	}

};

}
