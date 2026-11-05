SELECT student_id, exam_id, score
FROM exam_results e
WHERE exam_id = (
    SELECT exam_id
    FROM exam_results
    WHERE student_id = e.student_id
    ORDER BY score DESC, exam_id ASC
    LIMIT 1
)
ORDER BY student_id ASC;