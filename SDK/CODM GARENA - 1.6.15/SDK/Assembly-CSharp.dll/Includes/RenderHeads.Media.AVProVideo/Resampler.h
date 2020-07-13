#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class Resampler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "Resampler"));
	}

	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _mediaPlayer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _outputTexture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _start() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _end() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _bufferSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& _baseTimestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _elapsedTimeSinceBase() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _blendMat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _resampleMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int64_t> T& _lastTimeStamp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _droppedFrames() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& _lastDisplayedTimestamp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _frameDisplayedTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& _currentDisplayedTimestamp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& LastT() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& TextureTimeStamp() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> static T& ShaderPropT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShaderPropAftertex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _propAfterTex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _propT() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _videoFrameRate() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVideoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseRenderTextures() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstructRenderTextures() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRenderTexturesValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindBeforeFrameIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindClosestFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PointUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SampleFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SampleFrames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LinearUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvalidateBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GuessFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = int32_t> T get_DroppedFrames() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4123E50))(this);
	}
	template <typename T = int32_t> T get_FrameDisplayedTimer() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4123E58))(this);
	}
	template <typename T = int64_t> T get_BaseTimestamp() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4123E60))(this);
	}
	template <typename T = void> T set_BaseTimestamp(int64_t value) {
		return ((T (*)(Resampler*, int64_t))(Il2CppBase() + 0x4123E68))(this, value);
	}
	template <typename T = float> T get_ElapsedTimeSinceBase() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4123E78))(this);
	}
	template <typename T = void> T set_ElapsedTimeSinceBase(float value) {
		return ((T (*)(Resampler*, float))(Il2CppBase() + 0x4123E80))(this, value);
	}
	template <typename T = float> T get_LastT() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4123E88))(this);
	}
	template <typename T = void> T set_LastT(float value) {
		return ((T (*)(Resampler*, float))(Il2CppBase() + 0x4123E90))(this, value);
	}
	template <typename T = int64_t> T get_TextureTimeStamp() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4123E98))(this);
	}
	template <typename T = void> T set_TextureTimeStamp(int64_t value) {
		return ((T (*)(Resampler*, int64_t))(Il2CppBase() + 0x4123EA0))(this, value);
	}
	template <typename T = void> T OnVideoEvent(uintptr_t mp, uintptr_t et, uintptr_t errorCode) {
		return ((T (*)(Resampler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4123EB0))(this, mp, et, errorCode);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OutputTexture() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x412406C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x41184B8))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x411BF5C))(this);
	}
	template <typename T = void> T ReleaseRenderTextures() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4124258))(this);
	}
	template <typename T = void> T ConstructRenderTextures() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x41245F4))(this);
	}
	template <typename T = bool> T CheckRenderTexturesValid() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4124E58))(this);
	}
	template <typename T = int32_t> T FindBeforeFrameIndex(int32_t frameIdx) {
		return ((T (*)(Resampler*, int32_t))(Il2CppBase() + 0x4125420))(this, frameIdx);
	}
	template <typename T = int32_t> T FindClosestFrame(int32_t frameIdx) {
		return ((T (*)(Resampler*, int32_t))(Il2CppBase() + 0x4125704))(this, frameIdx);
	}
	template <typename T = void> T PointUpdate() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x41259CC))(this);
	}
	template <typename T = void> T SampleFrame(int32_t frameIdx, int32_t bufferIdx) {
		return ((T (*)(Resampler*, int32_t, int32_t))(Il2CppBase() + 0x4125C7C))(this, frameIdx, bufferIdx);
	}
	template <typename T = void> T SampleFrames(int32_t bufferIdx, int32_t frameIdx1, int32_t frameIdx2, float t) {
		return ((T (*)(Resampler*, int32_t, int32_t, int32_t, float))(Il2CppBase() + 0x4125EB4))(this, bufferIdx, frameIdx1, frameIdx2, t);
	}
	template <typename T = void> T LinearUpdate() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x41262F4))(this);
	}
	template <typename T = void> T InvalidateBuffer() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x4124074))(this);
	}
	template <typename T = float> T GuessFrameRate() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x41265FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x411A7F0))(this);
	}
	template <typename T = void> T UpdateTimestamp() {
		return ((T (*)(Resampler*))(Il2CppBase() + 0x411BA00))(this);
	}

};

}
