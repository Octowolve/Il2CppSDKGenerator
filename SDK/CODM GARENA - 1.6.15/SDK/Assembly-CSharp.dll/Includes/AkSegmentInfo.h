#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSegmentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSegmentInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2252DD0))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSegmentInfo*, uintptr_t))(Il2CppBase() + 0x2252E64))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2252E90))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2252EF8))(this);
	}
	template <typename T = void> T set_iCurrentPosition(int32_t value) {
		return ((T (*)(AkSegmentInfo*, int32_t))(Il2CppBase() + 0x2253158))(this, value);
	}
	template <typename T = int32_t> T get_iCurrentPosition() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x22532EC))(this);
	}
	template <typename T = void> T set_iPreEntryDuration(int32_t value) {
		return ((T (*)(AkSegmentInfo*, int32_t))(Il2CppBase() + 0x2253470))(this, value);
	}
	template <typename T = int32_t> T get_iPreEntryDuration() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2253604))(this);
	}
	template <typename T = void> T set_iActiveDuration(int32_t value) {
		return ((T (*)(AkSegmentInfo*, int32_t))(Il2CppBase() + 0x2253788))(this, value);
	}
	template <typename T = int32_t> T get_iActiveDuration() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x225391C))(this);
	}
	template <typename T = void> T set_iPostExitDuration(int32_t value) {
		return ((T (*)(AkSegmentInfo*, int32_t))(Il2CppBase() + 0x2253AA0))(this, value);
	}
	template <typename T = int32_t> T get_iPostExitDuration() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2253C34))(this);
	}
	template <typename T = void> T set_iRemainingLookAheadTime(int32_t value) {
		return ((T (*)(AkSegmentInfo*, int32_t))(Il2CppBase() + 0x2253DB8))(this, value);
	}
	template <typename T = int32_t> T get_iRemainingLookAheadTime() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2253F4C))(this);
	}
	template <typename T = void> T set_fBeatDuration(float value) {
		return ((T (*)(AkSegmentInfo*, float))(Il2CppBase() + 0x22540D0))(this, value);
	}
	template <typename T = float> T get_fBeatDuration() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2254264))(this);
	}
	template <typename T = void> T set_fBarDuration(float value) {
		return ((T (*)(AkSegmentInfo*, float))(Il2CppBase() + 0x22543E8))(this, value);
	}
	template <typename T = float> T get_fBarDuration() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x225457C))(this);
	}
	template <typename T = void> T set_fGridDuration(float value) {
		return ((T (*)(AkSegmentInfo*, float))(Il2CppBase() + 0x2254700))(this, value);
	}
	template <typename T = float> T get_fGridDuration() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2254894))(this);
	}
	template <typename T = void> T set_fGridOffset(float value) {
		return ((T (*)(AkSegmentInfo*, float))(Il2CppBase() + 0x2254A18))(this, value);
	}
	template <typename T = float> T get_fGridOffset() {
		return ((T (*)(AkSegmentInfo*))(Il2CppBase() + 0x2254BAC))(this);
	}

};

}
